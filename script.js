
  function validateform(){  
var name=document.getElementById('fname');
var lname=document.getElementById('lname');
var pno=document.getElementById('pno');
var pass=document.getElementById('pass');
var repass=document.getElementById('repass');  
var eid=document.getElementById('eid'); 
 
if (name.value == null || name.value == ""){  
  alert("First Name is mandatory, you cannot leave this field empty.");  
  fname.focus();
  return false; 
}

if (name.value.length > 64){
	alert("Name cannot exceed 64 characters.")
	name.focus();
	return false;
}

 if (lname.value == null || lname.value == ""){
	alert("Last name cannot be empty.");
lname.focus();
return false;
}

if (lname.value.length > 64){
	alert("Last Name cannot exceed 64 characters.")
	lname.focus();
	return false;
}

 if (pno.value.length !=10 || isNaN(pno.value) ){
	alert("Please enter a valid 10 digit phone number.");
	pno.focus();
	return false;
}
 if (pass.value.length < 8){
	alert("Password should have atleast 8 characters.");
pass.focus();
return fasle;
}

if (pass.value.length > 32){
	alert("Password cannot exceed 32 characters.")
	pass.focus();
	return false;
}

if (pass.value != repass.value){
	alert('Retype password does not match with Password.');
return false;
}	

if (eid.value == null || eid.value == ""){
	alert("Please enter the Email address.");
eid.focus();
return false;
}

if (eid.value.length > 64){
	alert("Email ID cannot exceed 64 characters.")
	eid.focus();
	return false;
}

	}
	
function validateuform(){
	var leid=document.getElementById('leid');
	var lpass=document.getElementById('lpass');
	
	if (leid.value == null || leid.value == ""){
	alert("Please enter the Email address.");
leid.focus();
return false;
	}
	
	if (lpass.value == null || lpass.value == ""){
	alert("Please enter the password.");
leid.focus();
return false;
	}
	
	
}
	
  
 function form(){
var title=document.getElementById('title');
var descr=document.getElementById('descr');
var  no=document.getElementById('link');

if (title.value.length > 32){
	alert("Title cannot exceed 32 characters.")
	title.focus();
	return false;
}	 

if (descr.value.length > 256{
	alert("Description cannot exceed 256 characters.")
	descr.focus();
	return false;

	if (no.value.length > 256){
	alert("Link cannot exceed 256 characters.")
no.focus();
	return false;
}