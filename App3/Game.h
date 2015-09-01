#pragma once

using namespace Microsoft::WRL;
using namespace Windows::UI::Core;
using namespace DirectX;
using namespace Platform;

struct VERTEX
{
	float X, Y, Z;    // vertex position
};

class CGame
{
public:
	ComPtr<ID3D11Device1> dev;              // the device interface
	ComPtr<ID3D11DeviceContext1> devcon;    // the device context interface
	ComPtr<IDXGISwapChain1> swapchain;      // the swap chain interface
	ComPtr<ID3D11RenderTargetView> rendertarget;
	ComPtr<ID3D11Buffer> vertexbuffer;    // defined in CGame
	ComPtr<ID3D11VertexShader> vertexshader;
	ComPtr<ID3D11PixelShader> pixelshader;
	ComPtr<ID3D11InputLayout> inputlayout;    // the input layout interface

	void Initialize();
	void Update();
	void Render();
	void InitGraphics();
	void InitPipeline();
};
