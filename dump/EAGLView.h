/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "GKPeerPickerControllerDelegate-Protocol.h"
#import "GKSessionDelegate-Protocol.h"

@class EAGLContext;

@interface EAGLView : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <GKPeerPickerControllerDelegate, GKSessionDelegate>
{
    BOOL bInitialized;
    unsigned int SwapCount;
    unsigned int OnScreenColorRenderBuffer;
    unsigned int OnScreenColorRenderBufferMSAA;
    EAGLContext *MainContext;
    EAGLContext *WorkContext;
    unsigned int ResolveFrameBuffer;
    unsigned int depthRenderbuffer;
}

+ (Class)layerClass;
- (void)setOnScreenColorRenderBufferMSAA:(unsigned int)fp8;
- (unsigned int)OnScreenColorRenderBufferMSAA;
- (void)setOnScreenColorRenderBuffer:(unsigned int)fp8;
- (unsigned int)OnScreenColorRenderBuffer;
- (void)setSwapCount:(unsigned int)fp8;
- (unsigned int)SwapCount;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)dealloc;
- (void)DestroyFramebuffer;
- (BOOL)CreateFramebuffer:(BOOL)fp8;
- (void)SwapBuffers;
- (void)UnmakeCurrent;
- (void)MakeCurrent;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithCoder:(id)fp8;
- (id)InternalInitialize;
- (BOOL)becomeFirstResponder;

@end

