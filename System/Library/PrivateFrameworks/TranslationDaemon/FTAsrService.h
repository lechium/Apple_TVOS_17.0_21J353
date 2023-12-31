//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Osprey/OspreyChannel.h>

__attribute__((visibility("hidden")))
@interface FTAsrService : OspreyChannel
{
}

- (void)performGraphemeToPhoneme:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019bc6b
- (void)performCorrectionsValidator:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019ba26
- (void)performKeywordFinder:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b7e1
- (void)performPostItnHammer:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b59c
- (void)performTextNormalization:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b357
- (void)performItn:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019b112
- (void)performErrorBlamer:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019aecd
- (id)performRecognitionWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000019ac2c

@end

