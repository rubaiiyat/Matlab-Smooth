% Smoothing noisy temperature sensor data
t = 0:0.1:10;
true_temp = 20 + 5*sin(2*pi*0.5*t); % true temperature varies slowly
noisy_temp = true_temp + 2*randn(size(t)); % sensor noise
alpha = 0.3; % smoothing factor (low = more smoothing)
b_exp = alpha;
a_exp = [1, -(1-alpha)];
smooth_temp = filter(b_exp, a_exp, noisy_temp);
figure;
plot(t, noisy_temp, 'b.'); hold on;
plot(t, true_temp, 'g', 'LineWidth', 2);
plot(t, smooth_temp, 'r', 'LineWidth', 1.5);
legend('Noisy Sensor', 'True Signal', 'Exponential Smoothing');
xlabel('Time (seconds)'); ylabel('Temperature (°C)');
title('Real-life: Sensor Noise Removal in HVAC System');