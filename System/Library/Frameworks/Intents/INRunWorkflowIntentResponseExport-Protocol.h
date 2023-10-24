//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INArchivedObject, NSArray, NSNumber, NSString;

@protocol INRunWorkflowIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *requestsIntentExecution;
@property(copy, nonatomic) NSArray *steps;
@property(copy, nonatomic) NSNumber *continueRunning;
@property(copy, nonatomic) NSNumber *waitingForResume;
@property(copy, nonatomic) NSString *utterance;
@property(copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property(copy, nonatomic) INArchivedObject *underlyingIntent;
@property(readonly, nonatomic) long long code;
@end

