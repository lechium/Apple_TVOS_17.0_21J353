//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@protocol AFUIBridgeService <NSObject>
- (oneway void)stopAttendingWithReason:(unsigned long long)arg1;
- (oneway void)siriPrompted;
- (oneway void)siriDismissed;
- (oneway void)preheat;

@optional
- (oneway void)startAttending;
- (oneway void)siriWillPrompt;
@end

