# Unix SHELL

Table of Contents:
* [About](#about)
* [Files and Directories](#files-and-directories)
* [Get Started](#get-started)
* [Built-in Commands](#built-in-commands)
* [Contributing](#contributing)
* [Team](#team)
  * [Farrukh Adeel](#FarrukhAdeel67)
* [Resources](#resources)


## About
A basic unix shell built in C language. 

## Files and Directories
<table style="width: auto;" border="1" cellpadding="11">
<thead>
    <tr>
      <th>
        Folders & Files
      </th>
      <th>
        Description
      </th>
    </tr>
<thead>
<tbody>
  <tr>
    <td>.github</td>
    <td>Contains files related to github</td>
  </tr>

  <tr>
    <td>shell</td>
    <td>Contains the source code of the shell</td>
  </tr>
  
  <tr>
    <td>shell/__tests__</td>
    <td>Contains unittests</td>
  </tr>
  
  <tr>
    <td>shell/builtin</td>
    <td>Contains files and code related to the shell builtin commands</td>
  </tr>
  
  <tr>
    <td>shell/command_handler</td>
    <td>Contains files and code related to handling builtin commands and system commands</td>
  </tr>
  <tr>
    <td>shell/config</td>
    <td>Contains files and code related to general configuration of the shell (colors, ...)</td>
  </tr>
  
  <tr>
    <td>shell/parser</td>
    <td>Contains files and code related to parsing the commands entered by the user</td>
  </tr>
  
  <tr>
    <td>shell/prompt</td>
    <td>Contains files and code related to the shell command prompt</td>
  </tr>
  
  <tr>
    <td>shell/util</td>
    <td>Contains some useful helper functions</td>
  </tr>

  <tr>
    <td>shell/Makefile</td>
    <td>Special file used for compilation</td>
  </tr>

  <tr>
    <td>shell/shell.c</td>
    <td>Contains main() function</td>
  </tr>

</tbody>
</table>


## Get Started
Please Follow the following instructions to run the shell successfully

* Clone the repo
```
git clone https://github.com/FarrukhAdeel67/UNIX-Shell.git
```

* Be sure that you're inside unix-shell directory, you can run **pwd** to check the current working directory
```
/unix-shell$
```

* Change the current directory to shell/
```
/unix-shell$ cd shell

/unix-shell/shell$
```

* Be sure that **make** is already setup on your unix OS, otherwise run the following command
```
sudo apt-get install make
```

* Run **make** command to compile the code
```
/unix-shell/shell$ make
```

* Now run the shell

```
/unix-shell/shell$ ./shell
```

Congratulation now you can start testing our shell


## Built-in Commands

* Builtin commands are handled directly by the shell process. 
* Builtin commands don't cause the creation of a new child process.

<table style="width: auto;" border="1" cellpadding="11">
  <thead>
      <tr>
        <th>
          Command
        </th>
        <th>
          Description
        </th>
      </tr>
  <thead>
  <tbody>
    <tr>
      <td>cd</td>
      <td>Changes the current working directory</td>
    </tr>
    <tr>
      <td>showpid</td>
      <td>Prints out the PIDs of the last 10 processes created by the running shell process</td>
    </tr>
    <tr>
      <td>exit</td>
      <td>Causes normal process termination</td>
    </tr>
    </tbody>
</table>

## External Commands
* For each external command a new process is created by the running shell process

* The execution of the external commands is mainly based on using **fork()** and **execvp** , and to prevent defunct processes (zombie processes) **waitpid()** was used.

## Contributing

To contribute to this open-source project, follow these steps:

1. Fork the repository.
2. Create a branch: `git checkout -b <branch_name>`.

    ```
    branch_name = your_username/name
    ``` 
    ````
    e.g:
    username : farrukhadeel67 
    name : new_feature 
    branch = farrukhadeel67/new_feature 
    ```
3. Make your changes and commit them: `git commit -m '<commit_message>'`.
4. Push to your branch: `git push origin <project_name>/<location>`.
5. Create a pull request.


## Team
<td align="center">
<a href="https://github.com/FarrukhAdeel67">
<img src="https://avatars.githubusercontent.com/u/56479423?v=4" width="100px;" alt="" style="border-radius:50%"/>
<br />
<sub><b>Farrukh Adeel</b></sub>
</a>
<br />
</td>

</tr>
</table>
</div>
