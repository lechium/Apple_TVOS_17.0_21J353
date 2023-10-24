//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioAnalytics : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioAnalytics *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b8063
- (id)flatbuffData;	// IMP=0x00000000000b7ee6
- (Offset_245a6b61)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b7765
- (void)acoustic_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b75b4
- (unsigned long long)acoustic_features_count;	// IMP=0x00000000000b7518
- (id)acoustic_features_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b741f
@property(readonly, nonatomic) NSArray *acoustic_features;
- (void)speech_recognition_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b7150
- (unsigned long long)speech_recognition_features_count;	// IMP=0x00000000000b70b4
- (id)speech_recognition_features_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b6fbb
@property(readonly, nonatomic) NSArray *speech_recognition_features;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b6e92
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b6ce7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2;	// IMP=0x00000000000b6cd2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b6cb8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b6ca1

@end

