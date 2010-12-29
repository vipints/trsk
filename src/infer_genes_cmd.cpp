#include <string>
	using std::string;
#include <vector>
	using std::vector;
#include "region.h"
#include "genome.h"
#include "gene.h"
#include "gene_tools.h"
#include "infer_genes.h"


int main(int argc, char* argv[])
{   
	char* gio_file; 
	char* bam_file;
	char* gff_file;
	char* reg_file;
	if (argc<5)
	{
		gio_file = (char*) "/fml/ag-raetsch/nobackup/projects/sequencing_runs/A_thaliana_magic/genomes/A_thaliana_magic/Col_0/Col_0.gio/genome.config";
		bam_file = (char*) "/fml/ag-raetsch/nobackup/projects/sequencing_runs/A_thaliana_magic/reads/Col_0_Chr_nss.bam";
		gff_file = (char*) "genes_new.gff3";
		reg_file = (char*) "regions.txt";
	}
	else
	{
		gio_file = argv[1];
		bam_file = argv[2];
		gff_file = argv[3];
		reg_file = argv[4];
	}
	InferGenes::run_infer_genes(gio_file, bam_file, gff_file, reg_file);
}
