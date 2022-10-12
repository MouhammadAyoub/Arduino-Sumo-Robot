<a name="readme-top"></a>

<img src="assets/images/icon.png" align="right" />

# Arduino-Sumo-Robot</br>![Issues](https://img.shields.io/github/issues/MouhammadAyoub/Arduino-Sumo-Robot)&nbsp;![Stars](https://img.shields.io/github/stars/MouhammadAyoub/Arduino-Sumo-Robot)&nbsp;![Contributors](https://img.shields.io/github/contributors/MouhammadAyoub/Arduino-Sumo-Robot)&nbsp;![Forks](https://img.shields.io/github/forks/MouhammadAyoub/Arduino-Sumo-Robot)

> Welcome aboard fellow developer, this is where you will find projects which you are free to contribute to. You can contribute by submitting your own scripts, which you think would be amazing for other people to see.

## Description

It is a set of 5 programs used together to send a file from office A to office B very securely
- **Part 1 :** &nbsp;Desktop application built with ***WPF*** that takes file as input, encrypt the file, encode to base64, and write the output to txt file
- **Part 2 :** &nbsp;Script written in ***Python*** that decrypts the file created in (Part 1) written in ***C#***, and writes the output to a new file. (Decrypting a file using a language different from the language used in the encryption is to gain more experience)
- **Part 3 :** &nbsp;Web application built with ***ASP.NET core*** that receive files from client A using API, save them, and provide to client B when asked for. It have authentication to prevent others from upload or download and record every file upload and download to a database table
- **Part 4 :** &nbsp;Desktop application built with ***WPF*** that take file as input and send the file to web app (Part 3)
- **Part 5 :** &nbsp;Desktop application built with ***WPF*** (runnable on program of Part 2) that download files from the web application (Part 3)

## Installation

Download the project from github to your desktop:

  - **With Git** :
      If you’re familiar with git and have it installed on your computer, you can clone the repository to download the files.
      
      **1.** Click the green button labeled &nbsp;`Code`</br>
      
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/Button-Position.png" width="300px;" /></br>
      
      **2.** Copy the URL of the repository</br>
      
      **3.** Next, on your local machine, open your bash shell and change your current working directory to the location where you would like to clone your repository
      ```shell
      cd "path-to-your-folder"
      ```
      
      **4.** Once you have navigated to the directory where you want to put your repository, you can use
      ```shell
      git clone https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System.git
      ```
      
      **5.** When you run `git clone https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System.git`, You should see output like
      ```shell
      Cloning into 'test-repo'...
      remote: Counting objects: 5, done.
      remote: Compressing objects: 100% (4/4), done.
      remote: Total 5 (delta 0), reused 0 (delta 0), pack-reused 0
      Unpacking objects: 100% (5/5), done.
      Checking connectivity... done.
      ```
      </br>
      
  - **Without Git** :
      When downloading materials to your laptop, it is easiest to download the entire repository.
      
      **1.** Click on the green `Code` button, then download the repository as a ZIP file</br>
      
      &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/Download-Zip.png" width="350px;" /></br>
      
      **2.** Find the downloaded .zip file on your computer, likely in your Downloads folder</br>
      
      **3.** Unzip it, this will create a folder named after the GitHub repository</br></br>

  - **Steps you must do to make the system work properly** :
      
      - **Exercice 1 :** &nbsp;Nothing</br>
      
      - **Exercice 2 :**

          1. Before you install PIP on Windows, check if PIP is already installed:
          
              - Type ***cmd*** in the Windows search bar and click the `Command Prompt` icon
              - Type in the following command at the command prompt

                ```shell
                pip help
                ```
              - If PIP responds, then PIP is installed. Otherwise, there will be an error saying the program could not be found
      
          2. Before installing PIP, download the get-pip.py file:

              - Type ***cmd*** in the Windows search bar and click the `Command Prompt` icon
              - Run the following command to download the get-pip.py file

                ```shell
                curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
                ```
                
          3. Installing PIP on Windows:

              - To install PIP type in the following

                ```shell
                python get-pip.py
                ```

          4. Download Pakages:

              - To install `Crypto` library using PIP type in the following in the ***cmd***

                ```shell
                pip install pycryptodome
                ```

      - **Exercice 3 :**
      
          1. Launch ***MySQL Workbench*** and create a database with the following specifications
          
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/Database-Table.png" width="700px"/>
      
          2. Change the ***server***, ***database***, ***user*** and ***password*** values of the ***MySqlConnection*** function in the `Program.cs` file
          
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/MySQL-Connection.png" width="700px"/>
          
          3. Correct all paths to folders in the `Program.cs` file
      
      - **Exercice 4 :** &nbsp;
      
          1. Replace the current localhost in ***HttpWebRequest*** by your localhost in the `MainWindow.xaml.cs` file
          
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/My-Localhost.png" width="700px"/>
      
      - **Exercice 5 :** &nbsp;

          1. Replace the current localhost in ***HttpWebRequest*** by your localhost in the `MainWindow.xaml.cs` file
          
          &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/My-Localhost.png" width="700px"/>
          
          2. Correct all paths to folders in the `MainWindow.xaml.cs` file   

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Usage

- ***Exercice 1 :*** &nbsp;The first step you need to do is to use the desktop application in Exercise 1 to `Encrypt The File` you want to send

<img src="assets/images/Exercice1-Welcome.png" /></br>

***Note :*** &nbsp;This is the content of the `File` we need to encrypt

<img src="assets/images/Exercice1-Text.png" /></br>

***Note :*** &nbsp;Once you choose the file to be encrypted, the Save button will become clickable, and by clicking on it you can choose where you want to save the encrypted file

<img src="assets/images/Exercice1-Save.png" /></br>

***Note :*** &nbsp;This is the content of the file that we saved `After Encrypting It`

<img src="assets/images/Exercice1-Encrypted.png" /></br>

- ***Exercice 2 :*** &nbsp;The Exercise 2 is a Python script whose job is to `Decrypt The File` we just encrypted by receiving two arguments, the first is the path of the file we need to decrypt and the second is the path where we want to save the result, but we can't use it alone because it doesn't have a user interface, so we'll use it in Exercise 5 later

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="assets/images/Python-Script.png" width="550px"/>

- ***Exercice 3 :*** &nbsp;This is our web API which contains API functions that we have to use in other applications, and it is also the intermediate place where the file will be stored between office A and office B

<img src="assets/images/Exercice3-Welcome.png" /></br>

***Note :*** &nbsp;We have a `GetToken` function which provides strong site security without which authentication cannot succeed, and anyone who doesn't have a username and password or enter wrong values can't get the token

<img src="assets/images/Exercice3-Token.png" /></br>

***Note :*** &nbsp;We have an `UploadFiles` function that enables us to upload many files and store them in the web app by just giving the paths to these files

<img src="assets/images/Exercice3-Upload.png" /></br>

***Note :*** &nbsp;We also have a `DownloadFile` function which enables us to download the file from the web application simply by entering its name

<img src="assets/images/Exercice3-Download.png" /></br>

- ***Exercice 4 :*** &nbsp;The function of this desktop application is to `Send The Files` of our choice to the web application for the purpose of storing it

<img src="assets/images/Exercice4-Welcome.png" /></br>

***Note :*** &nbsp;Once the file is selected (of course we have to choose one of the files that we have already encrypted using the ثxercice 1 application), the `Send Button` will be clickable, and by clicking on it you will be able to send the file to the web application.

<img src="assets/images/Exercice4-Send.png" /></br>

- ***Exercice 5 :*** &nbsp;The function of this application is to allow Office B to `Download Encrypted Files` that Office A has uploaded to the web application

<img src="assets/images/Exercice5-Welcome.png" /></br>

***Note :*** &nbsp;Once the file name is entered (we did not put a drop down list of the file names on the web application in order to maintain high security, so the user must enter the file name accurately), the `Download Button` will be clickable, and by clicking on it will not only download the file, but also decrypt it by implicitly using the Python script in Exercise 2.

<img src="assets/images/Exercice5-Download.png" /></br>

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contribution Guidelines

The contribution guidelines are as per the guide [HERE](https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System/blob/main/CONTRIBUTING.md).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Instructions

- Fork this repository
- Clone your forked repository
- Add your scripts
- Commit and push
- Create a pull request
- Star this repository
- Wait for pull request to merge
- Celebrate your first step into the open source world and contribute more

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## License

Distributed under the MIT License. See [`LICENSE`](https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System/blob/main/LICENSE) for more information.  
Copyright © 2022, Mohammad Ayoub

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Contact

- Email&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:&nbsp;&nbsp;[mouhammad.ayoub@outlook.com](mailto:mouhammad.ayoub@outlook.com)

- Project Link : &nbsp;[https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System](https://github.com/MouhammadAyoub/Encrypted-File-Sharing-System)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Additional tools to help you get Started with Open-Source Contribution

* [How to Contribute to Open Source Projects – A Beginner's Guide](https://www.freecodecamp.org/news/how-to-contribute-to-open-source-projects-beginners-guide/)
* [How to Write a Good README File for Your GitHub Project](https://www.freecodecamp.org/news/how-to-write-a-good-readme-file/)

#### Note: When you add a project, add it to the README for ease of finding it.
#### Note: Please do not have the project link reference your local forked repository. Always link it to this repository after it has been merged with main.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

-----------
