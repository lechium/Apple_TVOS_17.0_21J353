//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSString;

@interface EscrowProxySyncOperation : NSOperation
{
    CDUnknownBlockType _completionBlockWithError;	// 8 = 0x8
    NSString *_dsid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003f4d
@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(copy) CDUnknownBlockType completionBlockWithError; // @synthesize completionBlockWithError=_completionBlockWithError;
- (void)main;	// IMP=0x0010000000003c08
- (id)initWithDSID:(id)arg1;	// IMP=0x0010000000003ba0

@end
