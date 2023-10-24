//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaAnalyzer : NSObject
{
    float _photoOffset;	// 8 = 0x8
}

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform)arg2 requestAnalyses:(unsigned long long)arg3 formatDescription:(struct opaqueCMFormatDescription *)arg4;	// IMP=0x006000000027f00c
@property(nonatomic) float photoOffset; // @synthesize photoOffset=_photoOffset;
@property(readonly, retain, nonatomic) NSDictionary *privateResults;
@property(readonly, retain, nonatomic) NSDictionary *publicResults;
- (int)finalizeAnalysis;	// IMP=0x000000000027f1d5
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;	// IMP=0x000000000027f1ca

@end

