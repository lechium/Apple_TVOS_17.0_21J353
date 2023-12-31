//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTCorrectionsAlignment : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct CorrectionsAlignment *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f7986
- (id)flatbuffData;	// IMP=0x00000000000f7809
- (Offset_bac1c052)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f76d2
@property(readonly, nonatomic) NSString *corrected_words;
@property(readonly, nonatomic) NSString *original_words;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f75eb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsAlignment *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f7440
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CorrectionsAlignment *)arg2;	// IMP=0x00000000000f742b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f7411
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f73fa

@end

