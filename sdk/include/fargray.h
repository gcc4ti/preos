;--------------------------------------------------------------
;unsigned char readheader(void *CompressedData)
;
; Function :
;	ben.. lit le header je pr�sume... #confus# ( o� alors Kristian Kr�mmer Nielsen (i.e. l'auteur original) c un sacr� pervers #picol# ...................................... Brrr, rien que d'y penser, j'en ai froid ds le dos #gol# )
;	bon ba ct bien �a : Reads the header of a fargray-datablock :)
;
;Input :
;	a5.l= Pointer to compressed data
;Output :
;	d2.b= 0 ou 1 selon les cas, qu'il me reste � d�couvrir..
;--------------------------------------------------------------
fargray::readheader	equ	fargray@0000








;--------------------------------------------------------------
;?? setbits(??)
;
;   ben.. aucune id�e pr�cise pour l'instant :( .... �a met des bits, mais � part �a #confus# (enfin �a remplit le buffer � la fin, mais g pas eu le temps d'�tudier plus que �a :o)
;
;Input :
;	??
;Output :
;	d2.b= 0 ou 1 selon les cas, qu'il me reste � d�couvrir..
;--------------------------------------------------------------
fargray::setbits	equ	fargray@0001








;--------------------------------------------------------------
;?? putimage(??)
;
;   � b�, heu.. m�me remarque que pour readheader.. #triso#
;
;Input :
;	??
;Output :
;	??
;--------------------------------------------------------------
fargray::putimage	equ	fargray@0002







;----------------------------------------------------------------------------
; put1planepic()
;
;input :
;	a5.l= Pointer to compressed data
;	d7.w= Number of bytes to paint
;
;output:
;	nothing ?
;----------------------------------------------------------------------------:
fargray::put1planepic	equ	fargray@0003








;----------------------------------------------------------------------------
; put2planepic()
;
;input :
;	a5.l= Pointer to compressed data
;	d7.w= Number of bytes to paint
;
;output:
;	nothing ?
;----------------------------------------------------------------------------
fargray::put2planepic	equ	fargray@0004







;----------------------------------------------------------------------------
; put3planepic()
;
;input :
;	a5.l= Pointer to compressed data
;	d7.w= Number of bytes to paint
;
;output:
;	nothing ?
;----------------------------------------------------------------------------
fargray::put3planepic	equ	fargray@0005