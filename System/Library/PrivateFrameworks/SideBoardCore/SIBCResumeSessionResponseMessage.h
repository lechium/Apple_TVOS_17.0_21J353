//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCResumeSessionResponseMessage : NSObject
{
    long long _status;	// 8 = 0x8
}

+ (id)logHandle;	// IMP=0x0010000000004c8e
+ (id)messageId;	// IMP=0x0010000000004c1f
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x0000000000004924
- (id)dictionaryEncoding;	// IMP=0x000000000000491c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
