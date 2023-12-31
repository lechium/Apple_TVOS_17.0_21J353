//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADRemoraLanguageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_languageToUUIDMap;	// 16 = 0x10
    MISSING_TYPE *_uuidToLanguageMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014f38b
- (void)_languageCodeDidChange:(id)arg1 forEndpointUUID:(id)arg2;	// IMP=0x001000000014f23b
- (void)getActiveLanguageCodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000014f1a4
- (id)init;	// IMP=0x001000000014f0ed

@end

