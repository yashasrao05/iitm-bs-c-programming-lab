# IITM BS - C programming lab

## Instructions

- Create a Github account: [Github signup](https://github.com/signup)
- Fork this repo: [How to Fork a repo](https://docs.github.com/en/get-started/quickstart/fork-a-repo#forking-a-repository)
- Setup a Github Codespace: [How to setup a codespace for a repo](https://docs.github.com/en/codespaces/developing-in-a-codespace/creating-a-codespace-for-a-repository#creating-a-codespace-for-a-repository)
- (Optional) Setup Codespace with local VS code: [Code spaces with visual studio code](https://docs.github.com/en/codespaces/developing-in-a-codespace/using-github-codespaces-in-visual-studio-code)


## Getting used to the VS code interface in CodeSpaces

The Github CodeSpaces is like a virtual machine running on the cloud which you can access using a web browser. It is a linux system which is running on the cloud. 

Here you have:
- The Explorer (**Ctrl+Shift+E**)- where your can see your files. 
- The Terminal (**Ctrl+`**)- where your can run your commands like compiling and running the code.
- The Source control (**Ctrl+Shift+G**)- where your can commit and push your changes. (In simple terms it is like saving your version of the code)
- The Editor - where you can view and edit the contents of your files.

### Explorer

You can find the Explorer in the top left corner of the codespace or use the shortcut **Ctrl+Shift+E**.

Try the following:
- Create a new flie
- Create a new folder
- Delete the newly created files and folder.

### Source control

#### The GitHub lingo
- **Git** - A Source code versioning system with a command line tool.
- **GitHub** - A cloud service for managing source code.
- **Repo(Repository)** - A folder which has an inbuilt versioning system(simply speaking a folder with a .git subfolder with the version details.).
- **Repo in GitHub** - A **repo** present in the GitHub Cloud.
- **Fork** - A copy of a **repo** which is also present in GitHub.
- **Clone** - A copy of a **repo** in your local machine.
- **CodeSpaces** - A virtual machine with the **Clone** of your repo that you can access online or using visual studio code.
- **Remote** - The original repo in the GitHub from which you cloned the local copy.

#### Basic Versioning

- Staging - Selecting which changes to save in the local clone.
- Commiting - Saving the changes in the local clone.
- Pushing - Pushing the commits to the remote so that the changes are reflected in the GitHub.
- Pulling - Pulling the the commits from the remote to the local Clone.

Try this:  
- Create a file using the explorer.
- Go to Source control **Ctrl+Shift+G**, Stage the changes using the "+" icon near the file name.
- Enter a commit message in the message box above the commit button.
- Click the dropdown near the commit button and click commit and push.
- Now check the GitHub repo for the changes you pushed.


Reference:  
- [How to commit and push your changes to the repo](https://docs.github.com/en/codespaces/developing-in-a-codespace/using-source-control-in-your-codespace#committing-your-changes)


### Terminal 

#### Basic Terminal commands
- pwd - prints the current working directory
- ls - list the files in the current working directory
- cd - change the current working directory.

#### Compiling and running a C source file in terminal
- Use cd to go to the directory where the the file.
```bash
cd path/to/the/source/file
```
- Compile the Code. If you
```bash
gcc source_file.c -o source_file
```

- Run the Compiled executable file.
```bash
./source_file
```

