//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequestFailureHandling-Protocol.h>
#import <AssistantServices/NSObject-Protocol.h>

@class AFSiriResponse;

@protocol AFSiriResponseHandling <NSObject, AFSiriRequestFailureHandling>
- (void)handleSiriResponse:(AFSiriResponse *)arg1 atTime:(unsigned long long)arg2;
@end

