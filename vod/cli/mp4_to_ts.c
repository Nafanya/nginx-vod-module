// gcc -Wall -g -o repack adts_encoder.c buffer_filter.c mp4_parser.c mp4_to_annexb.c mpegts_encoder.c repackTs.c vod_array.c muxer.c read_cache.c
// ./repack /opt/kaltura/app/alpha/web/repack.ts 0 10

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include "../hls/buffer_filter.h"
#include "../hls/mp4_to_annexb_filter.h"

int main(int argc, const char *argv[]) {
  if (argc < 3) {
    printf("too few arguments");
    return 1;
  }

  const char* infile_name = argv[1];
  const char* outfile_name = argv[2];


}
