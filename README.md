# Main directory
I use the following command: condor_submit CDataset.sub
In CDataset I call as executable RunDataset.sh, which reads the parameters from the script .txt file and SHOULD parse the dataset and call the main executable (Mixed_Analysis) for each file & respective arguments.
However the dasgoclient line does not work but I get the parsing error.

## Directory "python"
same rationale of main directory but RunDataset is now a python script.
However, I get a sintax error in the line:

p = subprocess.Popen([f'dasgoclient --query="file dataset={dataset} instance=prod/phys03"'], 


## Directory Fixed arguments
Like Main directory but with the arguments hardcoded in the .sh.
Was only used to test that the arguments were passed corrrectly

## Directory Inverted Order
To try to find a way around the parsing problem I tried to run first the .sh script that does the parsing and then while looping on the files, calling condor submit for each file
However apparently one cannot call condor_submit in this way or a "Missing file or directory" error will appear.

## Directory Pre_Post script
I was also trying to add a Post script to do hadd of the final files, but I was getting permission errors (even though I did chmod +x *)
This is a completely second order problem
