//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryDMAPRevisionOperation
{
    _Bool _success;	// 8 = 0x8
    unsigned int _revision;	// 12 = 0xc
}

@property(nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000004ad5f
- (id)initWithProtocol:(unsigned long long)arg1 sessionState:(id)arg2 requestSession:(id)arg3;	// IMP=0x000000000004abf7
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000004ab88

@end

