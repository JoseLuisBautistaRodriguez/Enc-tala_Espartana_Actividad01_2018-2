
	//							||	4_EDAI_2018II_CODE1	||

/*
	------------------------------------------------------------------------------------------
	Descripción de prácticas de programación del archivo.
	
	Uso de variables:
	
		Las variables se nombran de la siguiente manera: 
				
				(Tipo-de-variable)(Tipo-dato)_(palabra_en_funcion_del_uso_de_la_variable)  
	
				Global  = g		int   = i	* Al momento de declararla se requiere hacer una	
				funcion = f 	float = f		descripción de su uso dentro del programa.
								char  = c
				
		Al momento de declararla, por ejemplo:
					
						int fi_contadorUsuario 	// Contador del número que ingresa el usuario 
						int fi_contadorPc;	// Contador del número génerado por el pc.
				
		* Las variables que tienen la finalidad de actuar cómo contadores dentro de un 
		ciclo, son i, j, k y l. (En ese orden conforme se este trabajando).
			
	Uso de funciónes:
	
		Las funciónes se nombran de acuerdo con el siguiente criterio:
		
			(Tipo-de-función)_(descripción_Cada_palabra_inicil_con_mayuscula)
			
			void	= v			* Al momento de declararla se requiere hacer una
			int		= i				descripción de su uso dentro del programa.
				
		Al momento de declararla, por ejemplo:
		
						i_SumaDatos , v_RestaResultados , i_ImprimirDatos 	
	
	------------------------------------------------------------------------------------------
	
	Descripción del programa:

	Programa que realiza la implementación de la escitala espartana
	Para cifrar y descifrar.	
	
	------------------------------------------------------------------------------------------

	* This program is free software: you can redistribute it and/or modify
	* it under the terms of the GNU General Public License as published by
	* the Free Software Foundation, either version 3 of the License, or
	* (at your option) any later version.
	*
	* This program is distributed in the hope that it will be useful,
	* but WITHOUT ANY WARRANTY; without even the implied warranty of
	* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	* GNU General Public License for more details.
	*
	* You should have received a copy of the GNU General Public License
	* along with this program. If not, see <http://www.gnu.org/licenses/>.

															* Author Original: Jorge A. Solano
	------------------------------------------------------------------------------------------
*/
/*		1- Librerias	                 	*///----------------------------------------------
							
	#include<stdio.h>		                 // Configuraciones Estandar.
	#include<conio.h>		 				 // Configuraciones del color.
	#include<stdlib.h>						 // Uso de Funciones estandar.
	#include<time.h>						 // Uso de srand y Sleep dentro del programa.
							
/*--	1- Librerias   	 				   --*/

/*		2- Manejo de variables Globales		*///----------------------------------------------
	
	int i, j, k;							 // Contadores.
	int gi_controlPaswords[26];				 // Arreglo de Control de Contraseñas.
	
/*--	2- Manejo de variables Glovales    --*/

/*		3- Prototipado de funciones	        *///----------------------------------------------
							
	void fv_CrearMensaje();	     // Encripta el mensaje.
	void fv_DescifrarMensaje( );  // Desifra el mensaje para su lectura.
//	void fv_AbrirYLeerDocumento();									 // Copia los datos del documento externo.
	void fv_Desing( int i_color );			 						 // Imprime menbrete y colores en pantalla.
	int fi_EntradaDeUsuario( int i_configuracion ); 				 // Controla las entradas del usuario.
	
/*--	3- Prototipado de funciones	        --*/

	
/*		4- Función principal 				*///----------------------------------------------
	
	int main()
		{
			
 		int opcion=0, ii;
 		printf("\n\n\n\n\n\t\tCargando ");
 		for( ii = 0 ; ii < 10 ; ii++)fi_EntradaDeUsuario(4); 		 // Se limpia el chache en fi_EntradaDeusuario.
 		Sleep(500);													 // Pausa el programa n milisegundos. 
		 
		system("cls");												 // Limpia la pantalla.
 		
 		while (1)
		 {
		 	fv_Desing(0);						 												// Manda a imprimir el menbrete en la configuración 1.
		 	printf("\t\t\t\t\t\t ES%CTALA ESPARTANA ", 214);
 			printf("\n%c%c%c %cQu%c desea realizar? %c%c", 219, 219, 219,168, 130, 219, 219);
 			for( i = 0 ; i < 43 ; i++)printf("%c", 219);										// Imprime una linea azul
 			printf("\n\n   Ingresa ( ) para:\n\t   (1) \t    ---> Cifrar mensaje.\n");
 			printf("\t   (2) \t    ---> Leer mensaje.\n");
 			printf("\t   (3) \t    ---> Salir.\n\n");
 			for( i = 0 ; i < 45 ; i++)printf("%c", 219);										// Imprime una linea azul
 			printf(" ");
 			opcion = fi_EntradaDeUsuario( 2 );													// Manda llamar la función EntradaDeUsuario, esta valida el 
 																								// dato que ingresara el usuario.
 			switch(opcion)									
			 {
 				case 1:
 						fv_CrearMensaje();	
 						break;
 				case 2:
 						fv_DescifrarMensaje();
 						break;
 				case 3:																			// Termina el programa.
				 		return 0;
 				default: system ("cls"); 														// Notífica al usuario que el valor ingresado es incorrecto. 
				 		printf("\n\n\n\n\t\tValor no admitido.\n\t\tIngrese una opci%cn v%clida.", 162, 160);
				 		system (" color 47 ");
				 		 Sleep(2500);
						  system("cls");
 			}
 		}
	 return 0;
	}

/*--	4- Función principal 				--*/

/*		5- Manejo de funciones				*///----------------------------------------------
									         /* Descripción del fin de la función dentro del programa.
		
											*/
	void fv_CrearMensaje()
	{
 		
		 
		 int ren, col;
		 k =0;
		 
		 system("cls");
		 fv_Desing(1);
		 	
 		printf("\n\t\tIngresa el tamaño de la esc%ctala:\n", 161 );		//Creacion de la matriz
 		printf("\n\tRenglones:");
 		ren = fi_EntradaDeUsuario( 1 );
 		//scanf("%i",&ren);																		// Se le asigna un valor a "ren" -Renglones
 		printf("\n\tColumnas:");
 		col = fi_EntradaDeUsuario( 1 );
 		//scanf("%i",&col);																		// Se le asigna un valor a "col" -Columnas
 
 	 	// Se crea un arreglo bidimencional "escitala"; dependiente de "ren" y "col".
		  char escitala[ren][col];													
 		// Se crea un arreglo unidimencional llamado texto.
		 char texto[ren*col];														
	 	
		 system("cls");
		 fv_Desing(1);
	 	
		printf("\n\n\t\tEscriba el texto a cifrar:\n\t%c ", 219);
		// Se toma el mensaje con el tamaño del arreglo bidimencional.
	 	fgets( texto, ((ren*col)+2), stdin);
	 	
	 	char c_textoPaso[ren*col];
	 	j = 0 ;
	 	
	 	//printf("\n\t%s" , texto);
	 	
	 	for ( i = 0 ; i < ((ren*col)+2) ; i++)
	 	{
	 		if ( texto[i] != ' ' ) c_textoPaso[j] = texto[i];
	 		j++;
		 }
	 	
	 	for ( i = 0 ; i < (ren*col) ; i++)
	 	{
	 		texto[i] = c_textoPaso[i];
		 }
	 	
	 	//printf("\n\t%s" , texto);
		 //scanf("%s", texto);															
 		
		//Se llena el arreglo bidimencional con los valores de k
		k = 0;
			for (i=0 ; i<ren ; i++){
				for (j=0 ; j<col ; j++)
				{
					escitala[i][j] = texto[k];
					k++;	
				}
			}
 				
 		
		printf("\tEl texto en la tira queda de la siguiente manera:\n\t%c " , 219);
 	
	 		for (i=0 ; i<col ; i++)
 				for (j=0 ; j<ren ; j++)
					printf("%c", escitala[j][i]);
 		
		 printf("\n\n\t");
		 
	system("pause");
	system("cls");
		
	}
							
/*--	5- Manejo de funciones 	  --*/

/*		6- Manejo de funciones		*///------------------------------------------------------
									         /* Descripción del fin de la función dentro del programa.
		
											*/
											
	void fv_DescifrarMensaje( )
	{
	 	int ren, col;
	 	k =0;
	 	
	 	 system("cls");
		 fv_Desing(1);
	 	
 		printf("\n\t\tIngresar el tamaño de la esc%ctala:\n", 161);
 		printf("\n\tRenglones: ");
 		ren = fi_EntradaDeUsuario( 1 );
 		//scanf("%i",&ren);																		// Se le asigna un valor a "ren" -Renglones
 		printf("\n\tColumnas: ");
 		col = fi_EntradaDeUsuario( 1 );
 		//scanf("%i",&col);	
	 	
 		char escitala[ren][col];
	 	char texto[ren*col];
	 	
	 	 system("cls");
		 fv_Desing(1);	 	
	 	
	 	printf("\n\t\tEscriba el texto a descifrar:\n\t%c ", 219);
	 	fgets( texto, ((ren*col)+2), stdin);
	 	
	 	char c_textoPaso[ren*col];
	 	j = 0 ;
	 	
	 	//printf("\n\t%s" , texto);
	 	
	 	for ( i = 0 ; i < ((ren*col)+2) ; i++)
	 	{
	 		if ( texto[i] != ' ' ) c_textoPaso[j] = texto[i];
	 		j++;
		 }
	 	
	 	for ( i = 0 ; i < (ren*col) ; i++)
	 	{
	 		texto[i] = c_textoPaso[i];
		 }
 		
		 k = 0;
		for (i=0 ; i<col ; i++){
			for (j=0 ; j<ren ; j++)
			{
				escitala[j][i] = texto[k];
				k++;	
			}
		}
 		
 		/*for (i=0 ; i<col ; i++)
 			for (j=0 ; j<ren ; j++)
 				escitala[j][i] = texto[k++];*/
 		
	 	 system("cls");
		 fv_Desing(1);	 	
	 	
 		printf("\n\t\tEl texto descifrado es:\n\t%c ", 219);
 		
 		for (i=0 ; i<col ; i++)
 			for (j=0 ; j<ren ; j++)
 				printf("%c", escitala[i][j]);
 		
		 printf("\n\n\t");
		 
	system("pause");
	system("cls");
	}										
											
/*--	6- Manejo de funciones 	  --*/ 

/*		7- Manejo de funciones		///------------------------------------------------------
	void fv_AbrirYLeerDocumento()
	{
		
	}
/*--	7- Manejo de funciones 	  --*/	

/*		8- Manejo de funciones		*///------------------------------------------------------
									         /*  v_Desing
												Imprime en pantalla un menbrete.
												Los colores de la consola son:
													-Para color = 0: Fondo Blanco, Texto Azul.
												 	-Para color = 1: Fondo Negro, Texto verde.
												 	-Para color = 2: Fondo rojo, Texto blanco.
											*/
	void fv_Desing( int i_color )
	{
		if ( i_color == 0 )system("color 71");
		else if ( i_color == 1 )system("color 02");
		else if ( i_color == 2 )system("color 47");
		for( i = 0 ; i < 70 ; i++ )printf("%c", 219);  // El valor 219 simboliza un rectangulo
		printf("\n");
		for( i = 0 ; i < 70 ; i++ )printf("%c", 219); 
		printf("\n");
	}
/*--	8- Manejo de funciones 	  --*/	

/*		9- Manejo de funciones		*///------------------------------------------------------
									         /*  c_EntradaDeUsuario( int i_configuracion)
									         	Validad las entradas del usuario en las sigui-
									         	entes configuraciones ( i_configuracion ):
									         		0- 6 caracteres de tipo alfanúmerico.
									         		1- 5 a 20 caracteres alfanúmericos.
									         		2- 1 a 4.
									         		3- 0 a 40 caracteres alfanúmericos.
									         */

	int fi_EntradaDeUsuario( int i_configuracion )
	{	
		char *c_parametroPaso;
		int espacio = 40;
		k = 0 , j = 0;
		
		c_parametroPaso = (char*)malloc(espacio*sizeof(int*));									// Se pide espacio para la entrada del usuario.
		if (c_parametroPaso == NULL)															// Sí no se logra reservar el espacio suficiente se ejecuta esta sentencia.
		{
			printf("\nNo se ha podido reservar la memoria suficiente en fi_EntradaDeUsuario.");
			exit(1);
		}
 
		if ( i_configuracion == 4 ){															// Para limpiar el cache se ejecuta la funcion fi_EntradaDeUsuario 10 veces al inicio del programa.
			c_parametroPaso[0] = ' ';															// Solo es necesario hacerlo una vez.
		}else {
			fgets( c_parametroPaso, espacio, stdin);											// Aqui se reciben los valores de entrada del usuario.
		}
		
		c_parametroPaso = (char*)realloc(c_parametroPaso, espacio*sizeof(int*));				// Se reajusta el tamaño del array c_parametroPaso
		
		for ( i = 0 ; i < 40 ; i++)																// Aquí se cuenta el tamaño del array c_parametroPaso
		{
			if ( ((int)(c_parametroPaso[i])) > 31 && ((int)(c_parametroPaso[i])) < 126)			// K es el tamaño del arreglo.
			{
				 k++;	
			}else{
				j++;																			// Los valores en ASCII < 32 ó > 126 serán tomados como 
			}																					// caracteres especiales y si hay uno j > 0.
			if ( (k+1) == 4 )return 0;															// Si el usuario ingresa una cantidad mayor de 40 caracteres
		}																						// se sale del conteo y regresa un 0, este declarara que es 
																								// un valor no valido dentro del programa principal..
		switch (i_configuracion)
		{
			case 0 :  	if ( k == 6 && j == 0 )													// El caso 1 regresa la primrea contraseña del usuario
						{																		// excepto sí ha ingresado caracteres especiales.
							for ( i = 0 ; i < 6; i++)gi_controlPaswords[i] = ((int)(c_parametroPaso[i]));
							return 5;
						}else{
							return 0;															// Si ha ingresado caracteres especiales se regresara 0 y
						}																		// no se le daran valores a la contraseña. 
						break;
			
			case 1 :	if ( k == 1 )
						{
							if ( ((int)(c_parametroPaso[0])) > 48 && ((int)(c_parametroPaso[0])) < 57 )
							{
								return (((int)(c_parametroPaso[0])-48));
								break;
							}else if (((int)(c_parametroPaso[0])) == 48){
								//printf("\n\tValor no admitido.\n");
								return 0;
							}else{
								return ((int)(c_parametroPaso[0]));
							}
						}else{
								return 951;
							}
						
						break;
			
			case 2 :	if ( k == 1 )
						{
							if ( ((int)(c_parametroPaso[0])) > 48 && ((int)(c_parametroPaso[0])) < 52 )
							{
								return (((int)(c_parametroPaso[0])-48));
								break;
							}else if (((int)(c_parametroPaso[0])) == 48){
								//printf("\n\tValor no admitido.\n");
								return 0;
							}else{
								return ((int)(c_parametroPaso[0]));
							}
						}else{
								return 951;
							}
			
			case 3 : 
						
			case 4 : 	system("color 71");
						printf("%c%c%c", 219, 219, 219);
						break;
			
			default : printf("\n\tFuncion c_EntradaDeUsuario no ha respondido\n"); break;
		}	

			
	}

/*--	9- Manejo de funciones 	  --*/
	
/*
		||		Datos Generales del archivo:		||
	------------------------------------------------------------------------------------------
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	1227 Estructura de Datos y Algoritmos
	Grupo: 09
	
	Práctica: Ejercicio: Actividad:
	 
	Alumno: Bautista Rodríguez José Luis 
	Fecha de inicio: 18/02/2018
	Lugar: Av Universidad 3000, Cd. Universitaria, Coyoacán, 04510 Ciudad de México, CDMX
	------------------------------------------------------------------------------------------	||

*/
