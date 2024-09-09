void Tutorial2(){

  double x[5]={1,2,3,4,5};
  double y[5]={1,4,9,16,25};
  
  TGraph *gr = new TGraph(5,x,y);
  gr->SetMarkerStyle(3); //Cambia el estilo del punto en la grafica 
  gr->SetMarkerSize(1);
  
  TCanvas *c1 = new TCanvas(); 
  gr->Draw("ALP"); //Cambia el tipo de punto en la grafica
}
