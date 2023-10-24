//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriActivation/NSObject-Protocol.h>

@class NSString, NSUUID, SASActivationInstrumentationMessage, SiriAnalyticsClientMessageStream;

@protocol SASActivationInstrumentationSending <NSObject>
- (void)instrumentActivationMessage:(SASActivationInstrumentationMessage *)arg1;
- (void)instrumentTurnActivatedWithTurnId:(NSUUID *)arg1 activationEventIdentifier:(NSUUID *)arg2;
- (void)instrumentButtonInteractionType:(int)arg1 buttonIdentifier:(NSString *)arg2 activationEventIdentifier:(NSUUID *)arg3;
- (id)initWithAnalyticsStream:(SiriAnalyticsClientMessageStream *)arg1;
@end

