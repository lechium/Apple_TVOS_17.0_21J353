//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPStillImageMetaAnalyzer
{
    NSMutableArray *_results;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c8f46
- (id)privateResults;	// IMP=0x00000000000c8ea6
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;	// IMP=0x00000000000c8a60
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2;	// IMP=0x00000000000c89b6

@end
