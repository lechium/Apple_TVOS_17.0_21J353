//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKServerChangeToken;

@interface CKKSCloudKitFetchRequest : NSObject
{
    _Bool _participateInFetch;	// 8 = 0x8
    _Bool _resync;	// 9 = 0x9
    CKServerChangeToken *_changeToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bec0d
@property(retain) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property _Bool resync; // @synthesize resync=_resync;
@property _Bool participateInFetch; // @synthesize participateInFetch=_participateInFetch;

@end

