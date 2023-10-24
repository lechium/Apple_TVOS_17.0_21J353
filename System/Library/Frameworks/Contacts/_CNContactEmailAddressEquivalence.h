//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactEmailAddressEquivalence : NSObject
{
    NSString *_rawString;	// 8 = 0x8
}

+ (id)indexKeyForString:(id)arg1;	// IMP=0x00100000000f6d3c
- (void).cxx_destruct;	// IMP=0x00000000000f6e03
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;	// IMP=0x00000000000f6ddb
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x00000000000f6d51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
