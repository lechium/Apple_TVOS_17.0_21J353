//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, PBCodable, SRUIFPlatformHostingInstrumentationHandler;

@protocol SRUIFPlatformHostingInstrumentationHandlerDelegate <NSObject>
- (void)handler:(SRUIFPlatformHostingInstrumentationHandler *)arg1 requestToInstrumentEvent:(PBCodable *)arg2 turn:(AFAnalyticsTurnBasedInstrumentationContext *)arg3 machAbsoluteTime:(unsigned long long)arg4;
@end

