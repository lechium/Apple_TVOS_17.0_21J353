//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationDaemon/NSObject-Protocol.h>

@class FTSpeechTranslationStreamingResponse, NSError;

@protocol FTSpeechTranslationResponseDelegate <NSObject>

@optional
- (void)streamFailVerifySpeechTranslationStreamingResponse:(NSError *)arg1;
- (void)streamDidReceiveSpeechTranslationStreamingResponse:(FTSpeechTranslationStreamingResponse *)arg1;
@end

