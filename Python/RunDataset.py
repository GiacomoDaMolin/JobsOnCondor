#!/usr/bin/env python
import os
import sys
import ROOT
ROOT.gROOT.SetBatch(True)
import subprocess
import optparse

#arguments are from input are sys.argv[1]
#from the file I guess I can just read it normally? but here coming from .sub
#1 bool: True if MC, False if Data
#2 input dataset
#3 ouput path
#4 sigma
#5 lumi
#6 bool Signal


os.environ["X509_USER_PROXY"] ="/afs/cern.ch/user/g/gdamolin/private/x509up_u151129"

def getDatasetComponents(dataset):

    #get files in the dataset
    print('Querying',dataset)
    p = subprocess.Popen([f'dasgoclient --query="file dataset={dataset} instance=prod/phys03"'],
                         stdout=subprocess.PIPE,
                         stderr=subprocess.PIPE,
                         shell=True)
    out, err = p.communicate()


    dataset_files=[f.decode("utf-8") for f in out.split()]
    nfiles=len(dataset_files)
    print(f'I have {nfiles} jobs to submit')
   
    return dataset_files

if(sis.argv[0]):
	ROOT.gROOT.LoadMacro(“Mixed_Analysis.cpp”)
if(not sis.argv[0]):
	ROOT.gROOT.LoadMacro(“Data_Analysis.C”)

files=getDatasetComponents(sis.argv[1])

for i in files:
	print("Signal?", sis.argv[0], " File ", i , "saving it in",sis.argv[2], " arguments ", sis.argv[3],sis.argv[4],sis.argv[5])
	outfile=sis.argv[2]+"/"+i+".root"
	ROOT.main(sis.argv[1],outfile,sis.argv[3],sis.argv[4],sis.argv[5])

	
	
