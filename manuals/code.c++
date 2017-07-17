 /*Initialize Histos*/
    for (int bin=0;bin<Snr;bin++){
      sprintf(cha[1],"S2bin%d",bin);
      sprintf(cha[2],"2DS bin%d;E2;E1",bin);
      S2bin[bin]=new TH2D(cha[1],cha[2],95,0,190,95,0,190);
      sprintf(cha[3],"S1bin%d",bin);
      sprintf(cha[4],"1DS bin%d;Project;count",bin);
      S1bin[bin]=new TH1D(cha[3],cha[4],100,-20,80);
      if(debug) fprintf(stdout,"Hist %s is created\n",cha[2]);
    }
  for (int det=1;det<21;det++){
    sprintf(cha[1],"det%d",det);
    sprintf(cha[2],"Calibrated  E%d vs E%d",det,opposit(det));
    h1h2E[det]=new TH2D(cha[1],cha[2],95,0,190,95,0,190);
    sprintf(cha[1],"det%dchan",det);
    sprintf(cha[2],"Chan%d vs Chan%d",det,opposit(det));
    E1E2[det]=new TH2D(cha[1],cha[2],170,0,1700,170,0,1700);
  }
  sprintf(cha[1],"offE1E2total, %s;E2;E1",Sfile);
  offE1E2total=new TH2D("offE1E2total",cha[1],95,0,190,95,0,190);
  HitPattern=new TH2D("HitPattern","HitPattern;MWPCX;MWPCY",191,0,191,191,0,191);
  phi1phi2=new TH1D("phi1phi2","#phi_{1}-#phi_{2};#phi_{1}-#phi_{2};Counts",360,-360,360);
  Dphi1phi2=new TH2D("Dphi1phi2","2D #varphi_{1} vs #varphi_{2};#varphi_{1};#varphi_{2}",360,0,360,360,0,360);
  Dtheta1theta2=new TH2D("Dtheta1theta2","2D #vartheta_{1} vs #vartheta_{2};#vartheta_{1};#vartheta_{2}",40,0,40,40,0,40);
  Dthetaphi=new TH2D("Dthetaphi","2D #vartheta vs #varphi;#varphi;#vartheta",180,0,360,40,0,40);
  tdcgraph[0]=new TH1D("tdcgraph0","RElative tdc without cut;Tdc1-Tdc2;Counts",1000,-500,500);
  tdcgraph[1]=new TH1D("tdcgraph1","RElative tdc;Tdc1-Tdc2;Counts",100,-50,50);
}
