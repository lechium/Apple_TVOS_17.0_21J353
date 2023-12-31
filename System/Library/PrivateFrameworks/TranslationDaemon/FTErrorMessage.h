//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTErrorMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ErrorMessage *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006dced
- (id)flatbuffData;	// IMP=0x000000000006db70
- (Offset_bec099c5)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000006da95
@property(readonly, nonatomic) NSString *reason;
@property(readonly, nonatomic) unsigned int error_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d9f1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000006d846
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ErrorMessage *)arg2;	// IMP=0x000000000006d831
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000006d817
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000006d800

@end

