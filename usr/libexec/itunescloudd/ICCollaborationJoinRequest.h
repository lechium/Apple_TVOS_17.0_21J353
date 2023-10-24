//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface ICCollaborationJoinRequest
{
    NSString *_globalPlaylistID;	// 8 = 0x8
    NSURL *_invitationURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b7334
- (id)_requestBody;	// IMP=0x00100000000b72d7
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00100000000b71c1
- (id)initWithDatabaseID:(unsigned int)arg1 globalPlaylistID:(id)arg2 invitationURL:(id)arg3;	// IMP=0x00100000000b7095

@end
