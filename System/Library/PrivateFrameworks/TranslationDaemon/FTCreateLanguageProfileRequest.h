//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTUserLanguageProfile, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTCreateLanguageProfileRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct CreateLanguageProfileRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c71a1
- (id)flatbuffData;	// IMP=0x00000000000c7024
- (Offset_9283f17b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c6a26
@property(readonly, nonatomic) FTUserLanguageProfile *user_language_profile;
- (void)user_data_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c67a2
- (unsigned long long)user_data_count;	// IMP=0x00000000000c6706
- (id)user_data_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c660d
@property(readonly, nonatomic) NSArray *user_data;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c639a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CreateLanguageProfileRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c61ef
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CreateLanguageProfileRequest *)arg2;	// IMP=0x00000000000c61da
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c61c0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c61a9

@end

