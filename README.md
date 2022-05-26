<br/>
<p align="center">
    <img src="https://github.com/chrisdelmoro/42cursus/blob/main/badges/get_next_linem.png" alt="Logo" width="150" height="150">

  <p align="center">
    Reading a line on a fd is way too tedious.
    <br/>
    <img src="https://img.shields.io/badge/Mandatory-OK-brightgreen"/>
    <img src="https://img.shields.io/badge/Bonus-OK-brightgreen"/>
    <img src="https://img.shields.io/badge/Final%20Score-125-blue"/>
  </p>
</p>

# get_next_line (GNL)
## Introduction
Function that returns a line read from a file descriptor: we should be able to call getNextLine(int fd) multiple times and returns one line at a time. If some error occur or EOF is reached, return NULL.

* **Mandatory:** Calling the function get_next_line in a loop will then allow you to read the text available on the file descriptor one line at a time until the end of it. The function should return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL.
* **Bonus:** To succeed get_next_line with a single static variable. To be able to manage multiple file descriptors with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors
