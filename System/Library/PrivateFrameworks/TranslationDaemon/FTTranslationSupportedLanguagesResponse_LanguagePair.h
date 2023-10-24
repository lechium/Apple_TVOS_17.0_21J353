//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationSupportedLanguagesResponse_LanguagePair : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguagePair *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013455b
- (id)flatbuffData;	// IMP=0x00000000001343de
- (Offset_614cd169)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001342a7
@property(readonly, nonatomic) NSString *target_locale;
@property(readonly, nonatomic) NSString *source_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001341c0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000134015
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2;	// IMP=0x0000000000134000
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000133fe6
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000133fcf

@end
