//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionPrediction : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetectionPrediction *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001296da
- (id)flatbuffData;	// IMP=0x000000000012955d
- (Offset_f0848d62)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012942a
@property(readonly, nonatomic) _Bool is_low_confidence;
@property(readonly, nonatomic) float threshold;
@property(readonly, nonatomic) float confidence;
@property(readonly, nonatomic) NSString *locale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129324
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionPrediction *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000129179
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionPrediction *)arg2;	// IMP=0x0000000000129164
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012914a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000129133

@end

