//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol CSAttSiriNode;

@protocol CSAttSiriCCActivationNodeDelegate <NSObject>

@optional
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 startSpeechProcessing:(unsigned long long)arg2;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 reportedBoronScore:(_Bool)arg2;
- (void)attSiriNode:(id <CSAttSiriNode>)arg1 didActivateSuccessfully:(_Bool)arg2 withStartSampleCount:(unsigned long long)arg3;
@end

