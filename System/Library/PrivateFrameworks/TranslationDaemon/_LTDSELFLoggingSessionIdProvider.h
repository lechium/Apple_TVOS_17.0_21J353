//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, SISchemaUUID;

__attribute__((visibility("hidden")))
@interface _LTDSELFLoggingSessionIdProvider : NSObject
{
    SISchemaUUID *_cachedSessionId;	// 8 = 0x8
    NSDate *_dateSessionIdMostRecentlyAccessesOrCreated;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028e01
@property(readonly, nonatomic) NSDate *dateSessionIdMostRecentlyAccessesOrCreated; // @synthesize dateSessionIdMostRecentlyAccessesOrCreated=_dateSessionIdMostRecentlyAccessesOrCreated;
@property(readonly, nonatomic) SISchemaUUID *sessionId;

@end

