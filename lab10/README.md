# Week 10 Agenda
![Image](https://github.com/tgroechel/F17-280/blob/master/.other/pictures/recurssion.gif)

## Recursion
- Why would you do this?
- When have you done this?
- Linear, Tail, Tree -> oh my
- You can store results (don't have to return on same line)
```cpp
int print_stuff(int num){
	cout << num << endl;
	if(num <= 0){
		return 1;
	}
	int hold = print_stuff(num - 1);
	cout << hold << endl;
	return hold + 1;
}
```

## Worksheet
[Worksheet](https://drive.google.com/drive/u/1/folders/1suoq274Jiab9-Qza9NpLFLkWg3NmEElp)

## Review Material
- [Lab Ref Folder](https://docs.google.com/document/d/1n_sjFV9ToZwhcLdwjcmFBsD7F62wIYJ2AL2p7_5eofo/edit)
- [Extra Lab Review](https://drive.google.com/drive/u/1/folders/0BwMlZWZnhXI1dG45S0pVc1pRNTA)

## Lab Eval
[Lab Eval](https://docs.google.com/forms/d/1_T3fxH45keQrmPpgaHuG_h5CrHqojaXpvXPSG8M6Mlk/edit)


## Closing Time
