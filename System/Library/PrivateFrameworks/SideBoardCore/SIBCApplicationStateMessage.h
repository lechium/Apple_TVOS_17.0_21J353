//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SIBCApplicationStateMessage : NSObject
{
    NSDictionary *_state;	// 8 = 0x8
    NSString *_applicationId;	// 16 = 0x10
}

+ (id)messageId;	// IMP=0x001000000000c864
- (void).cxx_destruct;	// IMP=0x000000000000c882
@property(readonly, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x000000000000c856
- (id)dictionaryEncoding;	// IMP=0x000000000000c777
- (id)initWithApplication:(id)arg1 state:(id)arg2;	// IMP=0x000000000000c6ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

