//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTErrorBlamerResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ErrorBlamerResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f1b82
- (id)flatbuffData;	// IMP=0x00000000000f1a05
- (Offset_44f35e89)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000f18ac
@property(readonly, nonatomic) NSString *blamer_report;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f179a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000f15ef
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorBlamerResponse *)arg2;	// IMP=0x00000000000f15da
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f15c0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000f15a9

@end

