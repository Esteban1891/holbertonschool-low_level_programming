<h1>0x14. C - File I/O</h1>
<p><strong>What you should learn from this project</strong></p>
<pre>
  <code>At the end of this project you are expected to be able to explain to anyone, without the help of Google:</code>
</pre>
<ul>
  <li>Look for the right source of information online</li>
  <li>How to create, open, close, read and write files</li>
  <li>What are file descriptors</li>
  <li>What are the 3 standard file descriptors, what are their purpose and what are their POSIX names</li>
  <li>How to use the I/O system calls open, close, read and write</li>
  <li>What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR</li>
  <li>What are file permissions, and how to set them when creating a file with the open system call</li>
  <li>What is a system call</li>
  <li>What is the difference between a function and a system call</li>
</ul>
<h2>
  
</h2>
<h2>Exercises</h2>
<p>
  <a href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io">0-read_textfile.c</a>
</p>
<pre>
  <code>Write a function that reads a text file and prints it to the POSIX standard output.</code>
</pre>
<ul>
  <li>Prototype: ssize_t read_textfile(const char *filename, size_t letters);</li>
  <li>where letters is the number of letters it should read and print</li>
  <li>returns the actual number of letters it could read and print</li>
  <li>if the file can not be opened or read, return 0</li>
  <li>if filename is NULL return 0</li>
  <li>if write fails or does not write the expected amount of bytes, return 0</li>
</ul>
<p>
  <a href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io">1-create_file.c</a>
</p>
<pre>
  <code>Create a function that creates a file.</code>
</pre>
<ul>
  <li>Prototype: int create_file(const char *filename, char *text_content);</li>
  <li>where filename is the name of the file to create and text_content is a NULL terminated string to write to the file</li>
  <li>Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)</li>
  <li>The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.</li>
  <li>if the file already exists, truncate it</li>
  <li>if filename is NULL return -1</li>
  <li>if text_content is NULL create an empty file</li>
</ul>
<p>
  <a href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io">2-append_text_to_file.c</a>
</p>
<pre>
  <code>Write a function that appends text at the end of a file.</code>
</pre>
<ul>
  <li>Prototype: int append_text_to_file(const char *filename, char *text_content);</li>
  <li>where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file</li>
  <li>Return: 1 on success and -1 on failure</li>
  <li>Do not create the file if it does not exist</li>
  <li>If filename is NULL return -1</li>
  <li>If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file</li>
</ul>
<p>
  <a href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io">3-cp.c</a>
</p>
<pre>
  <code>Write a program that copies the content of a file to another file.</code>
</pre>
<ul>
  <li>Usage: cp file_from file_to</li>
  <li>if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error</li>
  <li>if file_to already exists, truncate it</li>
  <li>if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
    <ul>
      <li>where NAME_OF_THE_FILE is the first argument passed to your program</li>
    </ul>
  </li>
  <li>if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
    <ul>
      <li>where NAME_OF_THE_FILE is the second argument passed to your program</li>
    </ul>
  </li>
  <li>if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
    <ul>
      <li>where FD_VALUE is the value of the file descriptor</li>
    </ul>
  </li>
  <li>Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions</li>
  <li>You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer</li>
  <li>You are allowed to use dprintf</li>
</ul>
<h2>
  <a class="anchor" href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io#author"></a>
</h2>
<h2>Author</h2>
<h3>
  <a class="anchor" href="https://github.com/Esteban1891/holbertonschool-low_level_programming/tree/master/0x15-file_io#Esteban-De-La-Hoz"></a>
</h3>
<h3>Esteban De La Hoz</h3>
<p>Email:<a href="mailto:"esteban.delahoz15@gmail.com">esteban.delahoz