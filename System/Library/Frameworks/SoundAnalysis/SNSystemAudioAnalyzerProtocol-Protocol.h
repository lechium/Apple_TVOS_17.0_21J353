//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SNAudioConfiguration;
@protocol SNRequest, SNResultsObserving;

@protocol SNSystemAudioAnalyzerProtocol
- (void)setAudioConfiguration:(SNAudioConfiguration *)arg1;
- (void)removeAllRequests;
- (void)removeRequest:(id <SNRequest>)arg1;
- (_Bool)addRequest:(id <SNRequest>)arg1 withObserver:(id <SNResultsObserving>)arg2 error:(id *)arg3;
@end

