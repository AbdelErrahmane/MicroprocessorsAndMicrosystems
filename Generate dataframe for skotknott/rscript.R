#require(remotes)
#detach("package:ScottKnott", unload=TRUE)
#install_version("ScottKnott", version="1.2.7")

library(ScottKnott)
library(readr)
library(MASS)
library(ggplot2)
library(magrittr)

directory_path <- "C:/Users/abder/OneDrive/Documents/phd/implementation software/extended federated learning/SK_data"
file_names <- list.files(directory_path)

for (i in 1:length(file_names)) {
  
  FILE_NAME <- file_names[i]
  print(FILE_NAME)
  
  directory_path_slash <- paste0(directory_path,"/")

  file <- paste0(directory_path_slash,FILE_NAME)
  a <- read_csv(file)
  svm <- aov(Accuracy ~ Model, data = a)
  sk <- SK(svm, diseprsion = "se")
  
  # Modify the file name for output
  name_pic <- gsub(".csv", "", FILE_NAME) 
  name_pic_file <- gsub("%", "", FILE_NAME) 
  path_fold <- "C:/Users/abder/OneDrive/Documents/phd/implementation software/extended federated learning/SK_plot/"
  pic <- paste0(path_fold, name_pic_file, '.png')
  
  # Adjust the size of the output image
  png(pic, width = 1300, height = 800) 
  par(mar = c(14, 4, 4, 0.5) + 0.5)  # Adjust margin to accommodate larger text
  
  plot(sk, 
       xlab="", 
       ylab="Accuracy", 
       main=name_pic, 
       las=2, 
       pch=19,   # Type of point
       cex=1.3,    # Size of points
       cex.axis=1.2, 
       cex.lab=2.2, 
       cex.main=1.5,
       font.lab=7,
       font.title=7,
       font=7) # Make axis labels and main title bold

  dev.off()
}
