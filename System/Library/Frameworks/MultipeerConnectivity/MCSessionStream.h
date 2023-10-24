//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCPeerID, MCResourceDownloader, MCResourceProgressObserver, NSMutableData, NSProgress, NSString, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MCSessionStream : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    _Bool _sourceSuspended;	// 16 = 0x10
    _Bool _progressUnbounded;	// 17 = 0x11
    unsigned int _streamID;	// 20 = 0x14
    int state;	// 24 = 0x18
    int _fd;	// 28 = 0x1c
    MCPeerID *_peerID;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSMutableData *_incomingBuffer;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    NSProgress *_progress;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
    MCResourceDownloader *_urlDownloader;	// 80 = 0x50
    MCResourceProgressObserver *_observer;	// 88 = 0x58
}

@property(retain, nonatomic) MCResourceProgressObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) MCResourceDownloader *urlDownloader; // @synthesize urlDownloader=_urlDownloader;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool progressUnbounded; // @synthesize progressUnbounded=_progressUnbounded;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableData *incomingBuffer; // @synthesize incomingBuffer=_incomingBuffer;
@property(nonatomic) _Bool sourceSuspended; // @synthesize sourceSuspended=_sourceSuspended;
@property(nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
- (void)dealloc;	// IMP=0x0000000000002063

@end

