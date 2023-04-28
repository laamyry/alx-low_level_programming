    section .data
    message:	db "Hello, Holberton", 0
    format:	    db "%s", 0, 10;

                section .text
                global main
                extern printf
    main:
	            mov esi, message
	            mov edi, format
	            mov eax, 0
	            call printf

	            mov eax, 0
	        ret