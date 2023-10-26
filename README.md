# C_Notes
<h1>Introduction:</h1>
<img align="right" src="https://cdn.icon-icons.com/icons2/2415/PNG/512/c_original_logo_icon_146611.png" alt="C icon" width="400px">
<h3>
1.  Developed by Dennis Ritchie at Bell Labs in the early 1970s.
  
2.  Known for its efficiency, simplicity, and low-level system access.
   
3.  Follows a procedural programming paradigm.
   
4.  Focuses on functions and structured programming.
   
5.  Highly portable language, allowing programs written in C to run on different platforms with minimal modifications.
   
6.  C uses a syntax that includes variables, data types, operators, and control structures (loops and conditionals).

7.  To run C/C++ in your system you need 2 things:
          <h4> ► MinGW compiler => Just search mingw compiler downloader in google => Install it & then set the environment variable by giving the compiler path </h4>
          <h4> ► Code Editor/ IDE => Download VS Code </h4><p>I know many people will suggest you to install DevC++/ Turbo C ... But all of these are discontinuos software</p>
</h3>

<h1>How is it different from C++?</h1>
<h3>

►  The syntax of C++ is almost identical to that of C, as C++ was developed as an extension of C.

►  In contrast to C, C++ supports classes and objects, while C does not.

►  C gives most of the control to the hand of users. Things like memory allocation and manipulation are totally in the hands of the programmer. Being a flexible language, it provides more access to the programmer because of which it is more efficient.

►  C is POP(procedure oriented programming) whereas c++ is OOP(Object oriented programming)
</h3>

<h1>Basic Structure & Syntax</h1>
<p>Programming in C involves following a basic structure throughout. Here’s what it can be broken down to.</p>

<h3>

•  Pre-processor commands

•  Functions

•  Variables

•  Statements

•  Expressions

•  Comments

</h3>

<h2>Pre-processor commands</h2>
<p>Pre-processor commands are commands which tell our program that before its execution, it must include the file name mentioned in it because we are using some of the commands or codes from this file.
They add functionalities to a program.
One example could be,
</p>
<div class="code-toolbar"><pre class="language-c" tabindex="0"><code class="language-c"><span class="token macro property"><span class="token directive-hash">#</span><span class="token directive keyword">include</span> <span class="token string">&lt;math.h&gt;</span></span></code></pre><div class="toolbar"><div class="toolbar-item"><button class="copy-to-clipboard-button" type="button" data-copy-state="copy"></button></div></div></div>
<p>We include math.h to be able to use some special functions like power and absolute. #include<filename.h> is how we include them into our programs.
Detailed explanations of everything else in the structure will follow in the later part of the tutorial.</p>

<h2>Header files</h2>
<p>
·       Collection of predefined/built in functions developed

·       It is always declares on heading side of program hence it is called header file

·       It is identified with the extension(.h)

·       It gets installed while installing IDE(integrated development environment)

·       It stores functions as per their categories hence they are called library</p>

<img align="right" src="https://i.redd.it/nmuax05zxoab1.gif" alt="C logo" width="400px">

<h2>Syntax</h2>
<p>An example below shows how a basic C program is written.</p>

<div class="code-toolbar"><pre class="language-c" tabindex="0"><code class="language-c">Declaration of header file   		<span class="token comment">//name of the header files of which functions are been used</span>
<span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span>	                           <span class="token comment">/*it is called main function which stores the execution of program*/</span>
<span class="token punctuation">{</span>	                                              <span class="token comment">//start of the program</span>
              <span class="token comment">//program statements</span>
<span class="token punctuation">}</span>                                                <span class="token comment">//end of the program</span></code></pre><div class="toolbar"><div class="toolbar-item"><button class="copy-to-clipboard-button" type="button" data-copy-state="copy"></button></div></div></div>

<ul style="list-style-type: square;">
<li>Here, the first line is a pre-processor command including a header file stdio.h.</li>
<li>C ignores empty lines and spaces.</li>
<li>There is a main() function then, which should always be there.</li>
<li> <b>"//(Single Line)"     ||     "/* */ (Multiline Comment)" </b> </li>
<li>This a comment in C language, meaning it will be ignored by the compiler while compiling but it will remain in your source code for other developers to see what does the code do.</li>
<li>In the souce code Notes/ Imp points are written like this refer that.</li>
</ul>

<p>A C program is <strong>made up of different tokens combined</strong>. These tokens include:</p>
<ul style="list-style-type: square;">
<li>Keywords</li>
<li>Identifiers</li>
<li>Constants</li>
<li>String Literal</li>
<li>Symbols</li>
</ul>

<h2>Keywords</h2>
<p>Keywords are reserved words that can not be used elsewhere in the program for naming a variable or a function. They have a specific function or task and they are solely used for that. Their functionalities are pre-defined.
One such example of a keyword could be return which is used to build return statements for functions. Other examples are auto, if, default, etc. Whenever we write any keyword in IDE  their colour slightly changes and it looks different from other variables or functions for example in turbo c all keywords are turns into white colour .</p>

<h2>Identifiers</h2>
<p>Identifiers are names given to variables or functions to differentiate them from one another. Their definitions are solely based on our choice but there are a few rules that we have to follow while naming identifiers. One such rule says that the name can not contain special symbols such as @, -, *, <, etc.

C is a case-sensitive language so an identifier containing a capital letter and another one containing a small letter in the same place will be different. For example, the three words: Code, code, and cOde can be used as three different identifiers.

Rules for naming identifier-
1. One should not name any identifier starting with numeric value or symbol. It should start only with underscore or alphabet 
2. They should not contain space
3. Giving logical names is recommended as per our program</p>

<h2>Constants & Variables in C</h2>
<p>Variables are containers for storing data values.
<b>In C, there are different types of variables. All these are mentioned in source code download refer that</b> </p>
  
<p>Constants are very similar to a variable and they can also be of any data type. The only difference between a constant and a variable is that a constant’s value never changes. We will see constants in more detail in the upcoming tutorial.</p>

<h2>String Literal</h2>
<p>String literals or string constants are a sequence of characters enclosed in double quotation marks. For example,  “This is a string literal!” is a string literal. C method printf() utilizes the same to format the output.</p>
