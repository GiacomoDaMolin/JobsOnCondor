# Main directory

To create the description of the jobs needed to run over a dataset the following command can be used

```
sh RunDataset.sh -e myanalysis.py \
    -d dataset_name \
    -o output_dir
    -x xsec \
    -l integ_luminosity \
    -s is_signal
    -p full_path_to_proxy \
    -c full_path_to_cmssw
```

The output is a `jobdescription.txt` file which will list all the arguments to be used to process single files.
Before submitting to condor, test locally that a single file will be processed as desired by doing

```
sh RunDataset.sh `head -n 1 jobdescription.txt`
```

If all looks good you can submit to condor by doing

```
condor_submit jobdescription.sub
```

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
