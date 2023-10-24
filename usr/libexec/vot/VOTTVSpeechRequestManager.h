//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VOTTVSpeechRequestManager : NSObject
{
    double _lastFocusRequestTime;	// 8 = 0x8
    NSArray *_requestElements;	// 16 = 0x10
    NSArray *_requestHeaders;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000005f52b
- (void)setRequestHeaders:(id)arg1;	// IMP=0x001000000005f51a
- (id)requestHeaders;	// IMP=0x001000000005f510
@property(retain, nonatomic) NSArray *requestElements; // @synthesize requestElements=_requestElements;
- (void)transferAllFrom:(id)arg1;	// IMP=0x001000000005f455
- (void)transferElementsFrom:(id)arg1;	// IMP=0x001000000005f406
- (void)transferHeadersFrom:(id)arg1;	// IMP=0x001000000005f3b7
- (void)resetHeaders;	// IMP=0x001000000005f26d
- (void)resetElements;	// IMP=0x001000000005f123
- (void)reset;	// IMP=0x001000000005f0f5
- (id)generateOutputRequest:(_Bool *)arg1;	// IMP=0x001000000005ede2
- (_Bool)updateHeadersAndElementsWithTarget:(id)arg1 ignoreLastUpdate:(_Bool)arg2;	// IMP=0x001000000005e108
- (id)description;	// IMP=0x001000000005de72

@end
