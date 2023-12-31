//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ASLocalization : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    NSMutableDictionary *_stringTables;	// 24 = 0x18
}

+ (id)sharedLocalization;	// IMP=0x004000000000403b
- (void).cxx_destruct;	// IMP=0x0020000000003be2
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;	// IMP=0x0010000000003a6e
- (void)_clearTableCache;	// IMP=0x0010000000003a35
- (void)_languageCodeChanged;	// IMP=0x00100000000039ea
- (id)_languageCode;	// IMP=0x00100000000038cc
- (void)dealloc;	// IMP=0x001000000000388b
- (id)init;	// IMP=0x001000000000380e

@end

