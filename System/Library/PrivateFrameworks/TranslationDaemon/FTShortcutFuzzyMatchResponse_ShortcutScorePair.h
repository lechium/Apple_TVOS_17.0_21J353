//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTShortcutFuzzyMatchResponse_ShortcutScorePair : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ShortcutScorePair *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000127d31
- (id)flatbuffData;	// IMP=0x0000000000127bb4
- (Offset_288bd34a)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000127ac9
@property(readonly, nonatomic) double similarity_score;
@property(readonly, nonatomic) NSString *shortcut;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000127a22
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutScorePair *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000127877
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ShortcutScorePair *)arg2;	// IMP=0x0000000000127862
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000127848
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000127831

@end

