function remainTime() {
	setTimeout("remainTime()", 1000);
	var element= document.getElementsByClassName('tw-button tw-button--success tw-interactive');
	for(var i=0;i<element.length;i++){
		element[i].click();
	}
	

}
remainTime();
